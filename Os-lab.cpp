#include<bits/stdc++.h> using namespace std; string spc=" ";

void first_fit(){
    cout<<"Enter the size of the blocks ";     int block; cin>>block;     cout<<"enter blocks ";     int block_ar[block+5];     for(int i=0;i<block; i++){         cin>>block_ar[i];
    }
    cout<<"Enter the size of process ";     int proc; cin>>proc;     cout<<"Enter process ";     int proc_ar[proc+5];     for(int i=0;i<proc;i++){         cin>>proc_ar[i];
    }
    int flag[block+5]; memset(flag,-1,sizeof(flag));     int flag2[proc+5]; memset(flag2,-1,sizeof(flag2));     for(int i=0;i<proc;i++){         for(int j=0;j<block;j++){
            if(block_ar[j]>=proc_ar[i] && flag[j]!=1){                 flag[j]=1;                 flag2[i]=j+1;                 break;
            }
        }     }     cout<<endl;
    cout<<"Process id.\tProcess size.\tBlock no."<<endl;     for(int i=0;i<proc;i++){         if(flag2[i]==-1){             cout<<i+1<<"\t\t"<<proc_ar[i]<<"\t\t"<<"Not Allocated"<<endl;
        }else         cout<<i+1<<"\t\t"<<proc_ar[i]<<"\t\t"<<flag2[i]<<endl;
    }




}
void best_fit(){
    cout<<"Enter the size of the blocks ";     int block; cin>>block;     cout<<"enter blocks ";     int block_ar[block+5];     for(int i=1;i<=block; i++){         cin>>block_ar[i];
    }
    cout<<"Enter the size of process ";     int proc; cin>>proc;     cout<<"Enter process ";
    int proc_ar[proc+5];     for(int i=1;i<=proc;i++){         cin>>proc_ar[i];
    }
    int flag[block+5]; memset(flag,-1,sizeof(flag));     int flag2[proc+5]; memset(flag2,-1,sizeof(flag2));
      for(int i=1;i<=proc;i++){         int indx=-1,mn=INT_MAX;         for(int j=1;j<=block;j++){
            if(block_ar[j]>=proc_ar[i] && flag[j]!=1){                 mn=min(mn,abs(proc_ar[i]-block_ar[j]));                 if(mn==abs(proc_ar[i]-block_ar[j])){                     indx=j;
                }
            }         }         if(indx!=-1){             flag2[i]=indx;             flag[indx]=1;
        }
    }      cout<<endl;
    cout<<"Process id.\tProcess size.\tBlock no."<<endl;     for(int i=1;i<=proc;i++){         if(flag2[i]==-1){             cout<<i<<"\t\t"<<proc_ar[i]<<"\t\t"<<"Not Allocated"<<endl;
        }else cout<<i<<"\t\t"<<proc_ar[i]<<"\t\t"<<flag2[i]<<endl;
    }




}

void worst_fit(){
    cout<<"Enter the size of the blocks ";     int block; cin>>block;     cout<<"enter blocks ";     int block_ar[block+5];     for(int i=1;i<=block; i++){         cin>>block_ar[i];
    }
    cout<<"Enter the size of process ";     int proc; cin>>proc;     cout<<"Enter process ";     int proc_ar[proc+5];     for(int i=1;i<=proc;i++){         cin>>proc_ar[i];
    }
    int flag[block+5]; memset(flag,-1,sizeof(flag));     int flag2[proc+5]; memset(flag2,-1,sizeof(flag2));

     for(int i=1;i<=proc;i++){         int indx=-1,mx=INT_MIN;         for(int j=1;j<=block;j++){
            if(block_ar[j]>=proc_ar[i] && flag[j]!=1){                 mx=max(mx,abs(proc_ar[i]-block_ar[j]));                 if(mx==abs(proc_ar[i]-block_ar[j])){                     indx=j;
                }
            }         }         if(indx!=-1){             flag2[i]=indx;             flag[indx]=1;
        }
    }
    cout<<endl;
    cout<<"Process id.\tProcess size.\tBlock no."<<endl;     for(int i=1;i<=proc;i++){         if(flag2[i]==-1){             cout<<i<<"\t\t"<<proc_ar[i]<<"\t\t"<<"Not Allocated"<<endl;
        }else cout<<i<<"\t\t"<<proc_ar[i]<<"\t\t"<<flag2[i]<<endl;
    }


}



  int main(){
    cout<<"press 1, 2 or 3 for first fit, best fit and worst fit respectively
";
    int n; cin>>n;     if(n==1){         first_fit();     }else if(n==2){         best_fit();     }else if(n==3){         worst_fit();
    }else cout<<"Wrong input"<<endl;
}
