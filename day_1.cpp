class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.length(),len2=word2.length(),j=0,k=0,x=1;
        string merged;
        if(len1==len2)
        {
            for(int i=0;i<len1;i++)
            {
                merged=merged+word1.at(i);
                merged=merged+word2.at(i);
            }

        }
        else
        {
            while(x==1)
            {
                if(len1!=0)
                {
               merged=merged+word1.at(j);
               j++;
               len1--;
                }
               if(len2!=0)
               {
                   merged=merged+word2.at(k);
                k++;
                len2--;
               }
               if(len1==0 && len2==0)
               {
                   x=0;
               }

            }
        }
        return merged;
    }
};
