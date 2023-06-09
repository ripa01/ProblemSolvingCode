#include <iostream>
using namespace std;
int partition(int l,int r,int arr[]){
	int i=l,j=l;
	while(j<r){
		if(arr[j]<arr[r]){ // যদি arr[j], arr এর শেষ ইলিমেন্ট arr[r] এর ছোট হয়
			swap(arr[i],arr[j]); //arr[i] এবং arr[j] কে swap করেছি
			i++; //i এর মান বড়িয়েছি
		}
		j++; //j এর মান বাড়িয়েছি
	}
	swap(arr[i],arr[r]);// শেষে পিভট ইলিমেন্ট কে নিজ জায়গায় নিয়ে এসেছি
	return i; //পিভট ইনডেক্স রিটার্ন করেছি।
}
void qsort(int l,int r,int arr[]){
	if(l>r) return;
	int p=partition(l,r,arr); //পার্টিশন করার মাধ্যমে পিভট ইনডেক্স খুজে বের করলাম
	qsort(l,p-1,arr); //রিকার্সিভ ভাবে পিভট এর বামপাশের সাব-অ্যারেকে সর্ট করবো।
	qsort(p+1,r,arr); //রিকার্সিভ ভাবে পিভট এর ডানপাশের সাব-অ্যারেকে সর্ট করবো।
}
int main(){
	int arr[]={2,2,4,5,6,7,8,9};
	qsort(0,7,arr);
	for(auto a:arr) cout<<a<<" ";
	return 0;
}
