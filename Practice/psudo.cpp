#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


//=====================================================================


int lengthOfCommonPrefix( string A, string B )
{
   int result = 0;
   int length = min( A.size(), B.size() );
   while ( result < length && A[result] == B[result] ) result++;
   return result;
}


//=====================================================================


int main()
{

   int N, Q, R;
   string P, str;
   map<string,int> S;
   map<string,int>::iterator itp, itm, it;


   // Read strings
   in >> N;
   for ( int i = 0; i < N; i++ ) 
   {
      in >> str;
      S.insert( pair<string,int>( str, i + 1 ) );
   }


   // Now deal with the queries one by one
   in >> Q;
   for ( int q = 0; q < Q; q++ )
   {
      in >> R >> P;

      // Find where P is or would be in the map (which is sorted, so longest common prefix is just before or after)
      auto found = S.find( P );
      if ( found != S.end() && found->second <= R )        // If this is already available before line R, just print it out
      {
         cout << P << '\n';
         continue;
      }
      auto ins = found;                                    // Otherwise either use current position of P ...
      if ( found == S.end() ) ins = S.insert( pair<string,int>( P, -1 ) ).first;     // ... or insert if necessary

      // Find the common prefix length on either side; the larger will be the maximum common prefix
      int LCPm = -1, LCPp= -1;
      itp = ins;
      for ( itp++; itp != S.end(); itp++ )                 // Strings after P in lexicographical order
      {
         if ( itp->second <= R )
         {
            LCPp = lengthOfCommonPrefix( itp->first, P );
            break;
         }
      }

      itm = ins;
      while ( itm != S.begin() )                           // Strings before P in lexicographical order
      {
         itm--;
         if ( itm->second <= R )
         {
            LCPm = lengthOfCommonPrefix( itm->first, P );
            break;
         }
      }

      if ( LCPp > LCPm )               // Answer is immediately after in lexicographical order
      {
         cout << itp->first << '\n';
      }
      else                             // Otherwise, work backwards to find earliest string with same common prefix
      {
         it = itm;
         while ( it != S.begin() )
         {
            it--;
            if ( it->second <= R )
            {
               if ( lengthOfCommonPrefix( it->first, P ) == LCPm ) itm = it;
               else                                                break;
            }
         }
         cout << itm->first << '\n';
      }

      if ( found == S.end() ) S.erase( P );                // You put it ... you have to take it out!
   }
}