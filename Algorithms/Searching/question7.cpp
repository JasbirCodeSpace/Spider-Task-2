//Question: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
int majorityElement(int arr[], int size)
{
    
  int idx = 0, count = 1;
  for(int i = 1;i<size; i++){
      if(arr[i] == arr[idx])count++;
      else count--;
      if(count == 0){
          idx = i;
          count = 1;
      }
  }
  
  int elem = arr[idx];
  count = 0;
  for(int i = 0;i<size;i++){
      if(arr[i] == elem)count++;
  }
  if(count > size/2)return elem;
  else return -1;
    
}