class Solution {
 public:
  int trap(vector<int>& height) {
      int n=height.size();
      int sum=0;
      int lmax=0,rmax=0;
      int l=0,r=n-1;
      while(l<=r){
          if(height[l]<=height[r]){
              if(lmax<height[l]) lmax=height[l];
              else sum+=(lmax-height[l]);
              l++;
          }
          else{
              if(rmax<height[r]) rmax=height[r];
              else sum+=(rmax-height[r]);
              r--;
          }
      }
      return sum;
      // int sum=0;
      // for(int i=0;i<height.size();i++){
      //     int max1=0,max2=0;
      //     for(int j=0;j<=i;j++){
      //         if(height[j]>max1){
      //             max1=height[j];
      //         }
      //     }
      //     for(int j=i+1;j<height.size();j++){
      //         if(height[j]>max2){
      //             max2=height[j];
      //         }
      //     }
      //     //cout<<max1<<" "<<max2<<"  sum";
      //     int mini=min(max1,max2);
      //     if(height[i]<mini) sum+=(mini-height[i]);
      //     //cout<<sum<<endl;;
      // }
      // return sum;
//     if (height.empty())
//       return 0;

//     int ans = 0;
//     int l = 0;
//     int r = height.size() - 1;
//     int maxL = height[l];
//     int maxR = height[r];

//     while (l < r)
//       if (maxL < maxR) {
//         ans += maxL - height[l];
//         maxL = max(maxL, height[++l]);
//       } else {
//         ans += maxR - height[r];
//         maxR = max(maxR, height[--r]);
//       }

//     return ans;
  }
};
