class Solution {
public:
    bool validUtf8(vector<int>& data) {
        bool ok=true;
        for(int i=0;i<data.size();i++)
        {
            int cnt=0;
            for(int bit=7;bit>=0;bit--)
            {
                int x=((1<<bit)&data[i]);
                if(x)cnt++;
                else break;
            }
            if(cnt==1||cnt>4)ok=false;
            if(cnt>1)
            {
                cnt-=1;
                for(int j=1;j<=cnt;j++)
                {
                    if((i+j)<data.size()&&(data[i+j]&(1<<7))&&(data[i+j]^(1<<6)))continue;
                    else ok=false;
                }
                i+=cnt;
            }
        }
        return ok;
    }
};