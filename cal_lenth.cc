#include <time.h>
 
void cal_residue(std::vector<int>max_num,std::vector<double>length_vec,std::vector<double> &residue_vec,std::vector<std::vector<int>> &tt_vec,int size,double length,int num)

  {

    // std::cout<<"size="<<size<<std::endl;
    std::vector<int> tn_vec[num];
    
    //std::vector<int> tm_vec;
   
      
    if(size==7){
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
    for ( tn[2]= 0; tn[2] < max_num[2]; tn[2]++){
      for ( tn[3]= 0; tn[3] < max_num[3]; tn[3]++){
	for ( tn[4]= 0; tn[4] < max_num[4]; tn[4]++){
	  for ( tn[5]= 0; tn[5] < max_num[5]; tn[5]++){
	    for ( tn[6]= 0; tn[6] < max_num[6]; tn[6]++){
	      double tm_residue=length;

	      int tm_num=0;
	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];
		tm_num=tm_num+tn[i];
		
	      }
	      
	     if(tm_residue>=0&&tm_num<6){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	    
	  }
	     /////////////////// 
	    }
	  }
	}
      }
    }
  }
 }
 }else if(size==6){

  
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
    for ( tn[2]= 0; tn[2] < max_num[2]; tn[2]++){
      for ( tn[3]= 0; tn[3] < max_num[3]; tn[3]++){
	for ( tn[4]= 0; tn[4] < max_num[4]; tn[4]++){
	  for ( tn[5]= 0; tn[5] < max_num[5]; tn[5]++){
	      double tm_residue=length;

	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];

	      }
	    
	     if(tm_residue>=0){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	    
	  }
	  }
	}
      }
    }
  }
 }
 } else if(size==5){
  //////////
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
    for ( tn[2]= 0; tn[2] < max_num[2]; tn[2]++){
      for ( tn[3]= 0; tn[3] < max_num[3]; tn[3]++){
	for ( tn[4]= 0; tn[4] < max_num[4]; tn[4]++){
	 
	      double tm_residue=length;

	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];

	      }
	     if(tm_residue>=0){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	    
	  }
	     ///////////
   	  
	}	
      }
      
    }
  }
 }
 }else if(size==4){
//////////
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
    for ( tn[2]= 0; tn[2] < max_num[2]; tn[2]++){
      for ( tn[3]= 0; tn[3] < max_num[3]; tn[3]++){
	 
	      double tm_residue=length;

	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];

	      }
	         if(tm_residue>=0){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	  }
	     ///////////
  
  
      }
    }
  }
 }
 }else if(size==3){
//////////
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
    for ( tn[2]= 0; tn[2] < max_num[2]; tn[2]++){
	 
	      double tm_residue=length;

	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];

	      }
	     
	     if(tm_residue>=0){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	  }
	     ///////////


  
      }
    }
  }
 }else if(size==2){
  
//////////
  int tn[size];
for ( tn[0]= 0; tn[0] < max_num[0]; tn[0]++) {
  for ( tn[1]= 0; tn[1] < max_num[1]; tn[1]++){
	 
	      double tm_residue=length;

	      for (int i= 0; i <size; i++){
		tm_residue=tm_residue-tn[i]*length_vec[i];

	      }
	     
	     if(tm_residue>=0){
	    residue_vec.push_back(tm_residue);
	    for (int i= 0; i <size; i++){
	     tn_vec[i].push_back(tn[i]); 
	    }
	   
	  }
	     ///////////
      
    }
  }
  
 }



for (int i= 0; i < num; i++) {

 tt_vec.push_back(tn_vec[i]);
 }
 for (int i= 0; i< residue_vec.size(); i++) {

   //std::cout<<residue_vec[i]<<std::endl;
 }


  }//////cal_residue


void check_lost_length(std::vector<std::vector<int>> tt_best_vec,std::vector<int> &flag_lost_vec,int num)
 {
   
   std::vector<int> tn_best_vec[num];
   
   for (int i= 0; i< num; i++) {
     tn_best_vec[i]=tt_best_vec[i];
   }
   
   
   for (int i= 0; i< num; i++) {
     
     if(tn_best_vec[i].size()>0){
       int tm_flag=0;
       for (int n= 0; n< tn_best_vec[i].size(); n++) {
	 if(tn_best_vec[i][n]>0){
	   tm_flag=1;
	   flag_lost_vec[i]=tm_flag;
	   break;
	 };	 
       }
     } 
   }
   
   /*
for (Int_t i= 0; i <flag_lost_vec.size(); i++)

  {
  
  std::cout<<"/////////check lost length ////////////////////// "<<std::endl;
  std::cout<<flag_lost_vec[i]<<std::endl;
    std::cout<<"/////////check lost length end////////////////////// "<<std::endl;
    }
    
   */
   
 
   
 }///////check_lost_length

void circle_best_num(std::vector<std::vector<int>> tt_best_vec,std::vector<int> &num_best_vec,std::vector<int> flag_lost_vec,std::vector<int>num_vec, int &min_num, int tm_max, int size,int check_end_flag,int num,int nn[]){
  
  std::vector<int> tn_best_vec[num];
  
   for (int i= 0; i< num; i++) {
     tn_best_vec[i]=tt_best_vec[i];
   }


   ////////////////////////////////	   
	   int sum_n[num];
	   
	    for ( int i= 0; i < num; i++) {
	      sum_n[i]=-999;
	    }
	    
	    for ( int ss= 0; ss < num; ss++) {
	      if(tn_best_vec[ss].size()>0){
		sum_n[ss]=0;
		for (int i= 0; i< tn_best_vec[ss].size(); i++) {
		  sum_n[ss]=sum_n[ss]+tn_best_vec[ss][i]*nn[i];
		}
	      }
	    }

	    
	    std::vector<int> sum_vec;
	    for ( int i= 0; i < num; i++) {
	      if(sum_n[i]>=0){
		sum_vec.push_back(sum_n[i]);
	      }
	    }
	    
	    /*
	    if( sum_vec.size()==5){
	    std::cout<<"////////////////////////"<<std::endl;
	    
	      
	    std::cout<< sum_vec[0]<<"   "<<sum_vec[1]<<"   "<<sum_vec[2]<<"  "<<sum_vec[3]<<"  "<<sum_vec[4]<<std::endl;
	    
	    }
	    */
	    
	    //////////////find satisfied number ////////////
	    int sum_check_flag=0;
	    int good_sum=0;
	    for (int i= 0; i< flag_lost_vec.size(); i++) {
	      good_sum= good_sum+flag_lost_vec[i];
	      
	    }
	    //  std::cout<<"good_sum="<< good_sum<<std::endl;
	    
	    for (int i= 0; i< sum_vec.size(); i++) {
	      
       if(sum_vec[i]>=num_vec[i]&&flag_lost_vec[i]>0){
	 sum_check_flag=sum_check_flag+1;
	 
       }
       
       
       //std::cout<<"//////////////check munber//////////"<<std::endl;
       //std::cout<<"sum_vec="<<sum_vec[i]<<"  "<<"num_vec="<<num_vec[i]<<"  "<<"flag_lost_vec="<<flag_lost_vec[i]<<"  "<<" sum_check_flag="<< sum_check_flag<<std::endl;

       //std::cout<<"//////////////check munber end//////////"<<std::endl;
       
	    }

	    
	    if(good_sum==sum_check_flag){

	      sum_check_flag=1;
	      
	      
	    }else{

	      sum_check_flag=0;
	    }
	    
 //////////////find satisfied number end  ///////////////
	    
	    

	    if( sum_vec.size()==5){
	      //std::cout<<"////////////////////////"<<std::endl;

	      //std::cout<<"sum_check_flag="<<sum_check_flag<<std::endl;
	      //std::cout<< sum_vec[0]<<"   "<<sum_vec[1]<<"   "<<sum_vec[2]<<"  "<<sum_vec[3]<<"  "<<sum_vec[4]<<std::endl;
	      //std::cout<< nn[0]<<"   "<<nn[1]<<"   "<<nn[2]<<"  "<<nn[3]<<std::endl;
	    }
	    
	    int tmp_sum_num=0;
	    
	    for (int i= 0; i< size; i++) {
	       tmp_sum_num=tmp_sum_num+nn[i];
	       
	    }
	    
	    if(sum_check_flag>0&&min_num>tmp_sum_num){
	      num_best_vec.clear();
	      min_num=tmp_sum_num;
	      
	      for (int i= 0; i< size; i++) {
		num_best_vec.push_back(nn[i]);	
	      }
	      
	    }

	    //std::cout<<"min_num="<<min_num<<std::endl;
	    
	    ///////////////////////////


}

void cal_best_num(std::vector<std::vector<int>> tt_best_vec,std::vector<int> &num_best_vec,std::vector<int> flag_lost_vec,std::vector<int>num_vec, int &min_num, int tm_max, int size,int check_end_flag,int num,std::vector<int> max_vec,std::vector<int> min_vec){

  
  std::vector<int> tn_best_vec[num];
  
   for (int i= 0; i< num; i++) {
     tn_best_vec[i]=tt_best_vec[i];
   }

    if(size==10){
      int nn[size];
      for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
	for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	  for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	    for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	      for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {
		for ( nn[5]= min_vec[5]; nn[5] < max_vec[5]; nn[5]++) {
		  for ( nn[6]= min_vec[6]; nn[6] < max_vec[6]; nn[6]++) {
		    for ( nn[7]= min_vec[7]; nn[7] < max_vec[7]; nn[7]++) {
		      for ( nn[8]= min_vec[8]; nn[8] < max_vec[8]; nn[8]++) {
			for ( nn[9]= min_vec[9]; nn[9] < max_vec[9]; nn[9]++) {
     
		   	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);

			}
		      }
		   }
		 }
	       }
	     }
	   }
	 }
       }
     }
   
    }else if(size==9){
      int nn[size];
     for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	     for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {
	       for ( nn[5]= min_vec[5]; nn[5] < max_vec[5]; nn[5]++) {
		 for ( nn[6]= min_vec[6]; nn[6] < max_vec[6]; nn[6]++) {
		   for ( nn[7]= min_vec[7]; nn[7] < max_vec[7]; nn[7]++) {
		      for ( nn[8]= min_vec[8]; nn[8] < max_vec[8]; nn[8]++) {
		   	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);

		      }
		   }
		 }
	       }
	     }
	   }
	 }
       }
     }
   
 }else if(size==8){
   int nn[size];
    for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	     for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {
	       for ( nn[5]= min_vec[5]; nn[5] < max_vec[5]; nn[5]++) {
		 for ( nn[6]= min_vec[6]; nn[6] < max_vec[6]; nn[6]++) {
		   for ( nn[7]= min_vec[7]; nn[7] < max_vec[7]; nn[7]++) {
		     
		   	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);

		   }
		 }
	       }
	     }
	   }
	 }
       }
     }

   
 }else if(size==7){
     int nn[size];
     for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	     for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {
	       for ( nn[5]= min_vec[5]; nn[5] < max_vec[5]; nn[5]++) {
		 for ( nn[6]= min_vec[6]; nn[6] < max_vec[6]; nn[6]++) {

		   	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);

		 }
	       }
	     }
	   }
	 }
       }
     }   
   } else if(size==6){
  int nn[size];
   for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	     for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {
	       for ( nn[5]= min_vec[5]; nn[5] < max_vec[5]; nn[5]++) {

		 
	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);

		 
	       }
	     }
	   }
	 }
       }
  }

 }else if(size==5){
     int nn[size];
     for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	     for ( nn[4]= min_vec[4]; nn[4] < max_vec[4]; nn[4]++) {

	       circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);


	       
	   }
	 }
       }
     }
   }
   }else if(size==4){
     
   //   std::cout<<"ppppppppp"<<std::endl;
     int nn[size];
     for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {
	   for ( nn[3]= min_vec[3]; nn[3] < max_vec[3]; nn[3]++) {
	      circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);
	     
	   }
	 }
       }
     }

   }else if(size==3){
     int nn[size];
      for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {
	 for ( nn[2]= min_vec[2]; nn[2] < max_vec[2]; nn[2]++) {

	   circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);
	   
	 
	 }
       }
     }
   }else if(size==2){
 int nn[size];
  for ( nn[0]= min_vec[0]; nn[0] < max_vec[0]; nn[0]++) {
       for ( nn[1]= min_vec[1]; nn[1] < max_vec[1]; nn[1]++) {

     circle_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size,check_end_flag, num, nn);
     
   }
 }
   }else if(size==1){
     
int nn;
 for ( nn= 0; nn < tm_max; nn++) {
   
   
   

   int sum_n[num];
   
   for ( int i= 0; i < num; i++) { sum_n[i]=-999; }
   
   for ( int ss= 0; ss < num; ss++) {
     if(tn_best_vec[ss].size()>0){
       sum_n[ss]=0;
       for (int i= 0; i< tn_best_vec[ss].size(); i++) {
	 sum_n[ss]=sum_n[ss]+tn_best_vec[ss][i]*nn;
       }
     }
   }

   
   std::vector<int> sum_vec;
   for ( int i= 0; i < num; i++) {
     if(sum_n[i]>=0){
       sum_vec.push_back(sum_n[i]);
     }
   }
   
	    /*	    
		    if( sum_vec.size()==5){
		    std::cout<<"////////////////////////"<<std::endl;
		    
	      
		    std::cout<< sum_vec[0]<<"   "<<sum_vec[1]<<"   "<<sum_vec[2]<<"  "<<sum_vec[3]<<"  "<<sum_vec[4]<<std::endl;
		    
		    }
	    */
   
	    //////////////find satisfied number ////////////
   int sum_check_flag=0;
   int good_sum=0;
   for (int i= 0; i< flag_lost_vec.size(); i++) {
     good_sum= good_sum+flag_lost_vec[i];
	      
   }
   //  std::cout<<"good_sum="<< good_sum<<std::endl;
   good_sum=good_sum-check_end_flag;
	    
   for (int i= 0; i< sum_vec.size(); i++) {
     
     if(sum_vec[i]>=num_vec[i]&&flag_lost_vec[i]>0){
       sum_check_flag=sum_check_flag+1;
       
     }
     
     
     //      std::cout<<"//////////////check munber//////////"<<std::endl;
     // std::cout<<"sum_vec="<<sum_vec[i]<<"  "<<"num_vec="<<num_vec[i]<<"  "<<"flag_lost_vec="<<flag_lost_vec[i]<<"  "<<" sum_check_flag="<< sum_check_flag<<std::endl;
     
     // std::cout<<"//////////////check munber end//////////"<<std::endl;
     
   }
   

   if(good_sum==sum_check_flag){
     
     sum_check_flag=1;
     

   }else{
     
     sum_check_flag=0;
   }

   //std::cout<<"sum_check_flag="<<sum_check_flag<<std::endl;
   //////////////find satisfied number end  ///////////////
   
      if(sum_check_flag==1){
	
	int tmp_sum_num=0;
	tmp_sum_num=tmp_sum_num+nn;
	num_best_vec.clear();
	min_num=tmp_sum_num;
	num_best_vec.push_back(nn);
	break;
      }
      
      /*
	    if( sum_vec.size()==1){
	    std::cout<<"////////////////////////"<<std::endl;
	    
	    std::cout<<"sum_check_flag="<<sum_check_flag<<std::endl;
	    //std::cout<< sum_vec[0]<<"   "<<sum_vec[1]<<"   "<<sum_vec[2]<<"  "<<sum_vec[3]<<"  "<<sum_vec[4]<<std::endl;
	      //std::cout<< nn[0]<<"   "<<nn[1]<<"   "<<nn[2]<<"  "<<nn[3]<<std::endl;
	      }
      */
      
      

      
      
 }//////for
 
   }////////size==1
   
   
   
   
   
}///cal_best_num



int  check_end(std::vector<int> flag_lost_vec,int &check_end_flag){
  
  
  check_end_flag=0;//////////////check finished//////////////
  for (Int_t i= 0; i< flag_lost_vec.size(); i++) {
    check_end_flag=check_end_flag+flag_lost_vec[i];
    
  }
  std::cout<<" check_end_flag="<< check_end_flag<<std::endl;
  
  if(check_end_flag==flag_lost_vec.size()){
    
    
    std::cout<<"//////////// program sucessfully finished!!!!!!!!!  ///////"<<std::endl;
    return 1;
    
  }
  return 0;
}



void test_fun(std::vector<int> v1,std::vector<double> *v2,std::vector<std::vector<int>> *v3,double *xx,double &yy){
  int size=v1.size();
  // std::vector<double> test_vec;

  for (Int_t i= 0; i < size; i++){
    v2->push_back(v1[i]);
    v3->push_back(v1);
    
  }

  *xx=9999;
  yy=8888;
  //  return test_vec;
}










void cal_lenth(){

  int iStartTime = time(NULL);
  double length=100.;
     std::vector<double> length_par={50.,20.,30.,90.,95.};
  std::vector<int> num_par={5,6,7,8,10};
   // std::vector<double> length_par={9,30,95.};
 // std::vector<int> num_par={5,5,6};
 // std::vector<double> length_par={30};
 // std::vector<int> num_par={10};
   // std::vector<double> length_par={50.,40.,20.,30.,90.,95.};
  //std::vector<int> num_par={5,3,7,4,10,8};


  
  std::vector<int> max_num;
  std::vector<double> length_vec;
  std::vector<int> num_vec;
  std::vector<double> check_vec;
  std::vector<double> test_vec;
  std::vector<std::vector<int>> tt_best_vec; 
  std::vector<std::vector<int>> tt_vec; 
  std::vector<std::vector<int>> cut_final_vec;
  std::vector<int> num_final_vec;
  std::vector<int> max_vec;
  std::vector<int> min_vec;
  
  int end_flag=-9999;
  for (int i= 0; i < length_par.size(); i++) {
    
  length_vec.push_back(length_par[i]);
  num_vec.push_back( num_par[i]);
  max_num.push_back( length/length_par[i]+2);
  check_vec.push_back(length_par[i]);                                            
  }
  
/*
 std::vector<double> v2;
 std::vector<std::vector<int>> v3;
 double v4;
 double v5;
 test_fun(max_num,&v2,&v3,&v4,v5);
 std::cout<<"size="<<v3.size()<<std::endl;
 std::cout<<"v4="<<v4<<std::endl;
 std::cout<<"v5="<<v5<<std::endl;
 for (Int_t i= 0; i < v3.size(); i++) {
   //std::cout<<v2[i]<<std::endl;

   for (Int_t n= 0; n < v3[i].size(); n++){
   
     std::cout<<v3[i][n]<<" ";
     }

     std::cout<<std::endl;
     }
*/

  std::cout<<"////////////length array//////////"<<std::endl;
  for (int i= 0; i < length_vec.size(); i++) {

    
    std::cout<< length_vec[i]<<" ";
    
 }

 std::cout<<std::endl;

   std::cout<<"////////////num array//////////"<<std::endl;
  for (int i= 0; i < num_vec.size(); i++) {

    
    std::cout<< num_vec[i]<<" ";
    
 }

 std::cout<<std::endl;

  
  for (int i= 0; i < length_vec.size(); i++) {

    if(length_vec[i]<=0||length_vec[i]>length){
      std::cout<<"check length array!!!!!!!"<<std::endl;
      return;
    }
    
 }

   for (int i= 0; i < num_vec.size(); i++) {

    if(num_vec[i]<=0){
      std::cout<<"check number array!!!!!!!"<<std::endl;
      return;
    }
    
 }


  
  int num=length_vec.size(); 
  int size=length_vec.size();
  for (int i= 0; i < size; i++) {//// check same length element
   for (int j= 0; j < size; j++){
     if(i!=j){
       double check=check_vec[j]-length_vec[i];
       if(check==0){
	 std::cout<<"find same element for length array"<<std::endl;
	 return;
       }
       
     }
     
   }
   // std::cout<<max_num[i]<<std::endl;
   
  }

  double min_length=999999;
  for (int i= 0; i < length_vec.size(); i++) {//////find min length
    if(length_vec[i]< min_length){

      min_length=length_vec[i];
    }


  }///find min length

  std::cout<<"min_length="<<min_length<<std::endl;
  
 int tm_max=-9;
 for (Int_t i= 0; i <num_vec.size(); i++){/// decide max number material ////////
   
   if(num_vec[i]>tm_max){
     
     tm_max=num_vec[i];
     
   }
   
 }//////////decide max number material end   ////////////
 
 //std::cout<< tm_max<<std::endl;
 tm_max=tm_max+1;
 
 
 
 //test_vec=time_vec(10.,length_vec);
 //std::cout<<test_vec[1]<<"  "<<length_vec[1]<<std::endl;
 //test_vec=2.*length_vec;
 /////////////////// lev1 find best cut //////////////////////
 
 std::cout<<"//////////// lev1 begin  ///////"<<std::endl;
 
 if(size>7){
   std::cout<<" lev1 find best cut fail!!!!!! too many length"<<std::endl;   
   return;
 }
 
 if(size==1){
   int tm_cut=-999;
      std::vector<int> tm_vec;
       max_num[0]= max_num[0]-1;
   if((length- max_num[0]* length_vec[0])>=0){
     tm_vec.push_back(max_num[0]);
     cut_final_vec.push_back(tm_vec);
     
   }else{
     tm_vec.push_back(max_num[0]-1);
     cut_final_vec.push_back(tm_vec);
   }

 std::cout<<"//////////best solution/////////"<<std::endl;

 for (int i= 0; i < cut_final_vec.size(); i++) {
   //std::cout<<v2[i]<<std::endl;
   for (int n= 0; n < cut_final_vec[i].size(); n++){
     std::cout<<cut_final_vec[i][n]<<" ";
   }
   std::cout<<std::endl;
 }
   
   
   for (int i= 0; i <tm_max; i++) {
     if(i*cut_final_vec[0][0]>=num_vec[0]){
       num_final_vec.push_back(i);
       break;
     }

   }
   
std::cout<<"//////////// material number  ///////"<<std::endl;
for (int i= 0; i< num_final_vec.size(); i++) {
  std::cout<<num_final_vec[i]<<"   ";
  // num_final_vec.push_back(num_best_vec[i]);
 }

 std::cout<<std::endl;

   //std::cout<<max_num[0]<<std::endl;
 std::cout<<"//////////// program sucessfully finished!!!!!!!!!  ///////"<<std::endl;
  std::cout<<"//////////// lev1 end  ///////"<<std::endl;
   return;
 }

 std::vector<double> residue_vec;
 
 
  std::vector<std::vector<int>> tn_vec;
  
  for (int i= 0; i <num; i++) {
	  
	  std::vector<int> kkk;
	  tn_vec.push_back(kkk);
	  //tn_vec[i].push_back(-99);
	  //tn_vec[i].clear();
  }
 
 for (int i= 0; i <num; i++) {
	 tn_vec[i].clear();
	 std::cout<<"pppppppp"<<std::endl;
	 
 }
 
 
 
 //std::vector<int> tn_vec[num];
 std::vector<int> tn_best_vec[num];
 
 size=length_vec.size();

 
 //std::vector<std::vector<int>> tt_vec;
  tt_vec.clear();
  //std::cout<< tt_vec.size()<<std::endl; 
  
  
  cal_residue(max_num,length_vec,residue_vec,tt_vec,size,length,num);
  

  for (int i= 0; i <num; i++) {
    
    tn_vec[i]=tt_vec[i];
    
  }

  
  
  double best_residue=min_length;
  /*
 for (int i= 0; i <residue_vec.size(); i++) {////////// find best residue   /////////////////
   
   
   if(residue_vec[i]<best_residue){
     best_residue=residue_vec[i];
   }
   
   //std::cout<< residue_vec[i]<<std::endl;      
 }///////////  find best residue end  /////////////////  
  */
 std::cout<< "best_residue="<<best_residue<<std::endl;
 
 for (int i= 0; i <residue_vec.size(); i++) {////find best solution  ////////////////

   if(residue_vec[i]<best_residue){
     
     for (int n= 0; n <num; n++) {
      if(tn_vec[n].size()>0){
	tn_best_vec[n].push_back( tn_vec[n][i]);}
      
     }
     
  }
 };//////////find best solution end  ///////////
 
 for (int i= 0; i <tn_best_vec[0].size(); i++){
   std::vector<int> tm_vec;
   for (int n= 0; n <num; n++){
     
     tm_vec.push_back(tn_best_vec[n][i]);

   }
   cut_final_vec.push_back(tm_vec);
 }

 //std::cout<<tn_best_vec[0].size()<<std::endl;
 //cut_final_vec
 std::cout<<"//////////check solution/////////"<<std::endl;


 //std::cout<<"tttttttt="<< length_vec.size()<<std::endl;

std::vector<int> length_map; 

for (int i= 0; i < length_vec.size(); i++) {

length_map.push_back(0);   


 }

for (int i= 0; i < cut_final_vec.size(); i++) {                                
   //std::cout<<v2[i]<<std::endl;                                               
   for (int n= 0; n < cut_final_vec[i].size(); n++){
     //std::cout<<cut_final_vec[i][n]<<std::endl;
     if(cut_final_vec[i][n]>0){
       
       length_map[n]=length_map[n]+1;
       //std::cout<<"map="<<length_map[n]<<std::endl;
     }
     
   }                                                                            

   //std::cout<<"///////////////////"<<std::endl;
 }    


for (int i= 0; i < length_vec.size(); i++) {
  std::cout<<length_map[i]<<" ";
  if( length_map[i]==0){

     
    std::cout<<" one length can't be founded!!!!!!!!"<<std::endl;

    return;
  }

 }

  std::cout<<std::endl;
 
 std::cout<<"//////////best solution/////////"<<std::endl; 
 for (int i= 0; i < cut_final_vec.size(); i++) {
   //std::cout<<v2[i]<<std::endl;
   for (int n= 0; n < cut_final_vec[i].size(); n++){
     std::cout<<cut_final_vec[i][n]<<" ";
   }
   std::cout<<std::endl;
 }
 std::cout<<"//////////best max/////////"<<std::endl;
 /*
 for (int i= 0; i < cut_final_vec.size(); i++) {//////////////set cirle max
   //std::cout<<v2[i]<<std::endl;
  int tm_num=99999;
   for (int n= 0; n < cut_final_vec[i].size(); n++){
     //   std::cout<<cut_final_vec[i][n]<<" ";
     if(cut_final_vec[i][n]<tm_num&&cut_final_vec[i][n]>0){
       tm_num=cut_final_vec[i][n];
     }
   }
   if(tm_num==1){max_vec.push_back(tm_max);}else{
     max_vec.push_back(tm_max/tm_num+1);
   }
   
 }/////set cirle max end 
 */
 
 
 // max_vec.clear();
for (int i= 0; i < cut_final_vec.size(); i++) {//////////////set cirle max
   //std::cout<<v2[i]<<std::endl;
  int tm_xx=-99999;
  int xn=0;
   for (int n= 0; n < cut_final_vec[i].size(); n++){
     //std::cout<<cut_final_vec[i][n]<<" ";
     if(cut_final_vec[i][n]!=0){
       xn=num_vec[n]/cut_final_vec[i][n]+2;
       // std::cout<<num_vec[n]<<"  "<<cut_final_vec[i][n]<<"  "<<xn<<std::endl;
     }
     if(xn>tm_xx){tm_xx=xn;
       //std::cout<<"tm_num="<<tm_xx<<std::endl;
     };
     
   }
   //tm_num=-99999;
   //std::cout<<"tm_num="<<tm_xx<<std::endl;
   if(tm_xx==1){
    max_vec.push_back(tm_xx+1);
   }else{
     max_vec.push_back(tm_xx);
   }
    //std::cout<<std::endl; 
 }/////set cirle max end 

 
//std::cout<<std::endl;
 
for (int i= 0; i < max_vec.size(); i++) {

  //  std::cout<<max_vec[i]<<std::endl;

 }
 
 for (int i= 0; i < cut_final_vec.size(); i++) {//////////////set cirle min
	  int xn=0;
	 
	 for (int n= 0; n < cut_final_vec[i].size(); n++){
		 
		 xn=xn+cut_final_vec[i][n];
		 
	 }
	 
	 if(xn==1){
		 //int xnn=-99;
		 for (int n= 0; n < cut_final_vec[i].size(); n++){
			 if(cut_final_vec[i][n]==1){min_vec.push_back(num_vec[n]);
				 break;
			 }
			 
		 }
		 
	 }else{
		 min_vec.push_back(0);
	 }
	 
 
 
  }/////set cirle min end 
  
  for (int i= 0; i < min_vec.size(); i++) {

   //std::cout<<min_vec[i]<<std::endl;

 }
  
  
 
 /*
for (int i= 0; i <tn_best_vec[0].size(); i++)

  {
     if(tn_vec[4].size()>0){
    std::cout<< tn_best_vec[0][i]<<"   "<<tn_best_vec[1][i]<<"   "<<tn_best_vec[2][i]<<"  "<<tn_best_vec[3][i]<<"  "<<tn_best_vec[4][i]<<std::endl;
     }

  }
  */
 size=-999;
 ///// lev1 find best cut end   ///////////////////


//// lev1 find best number  ///////////////

 size=tn_best_vec[0].size();
 std::cout<< "solution_num="<<size<<std::endl; 


 if(size>10){
 std::cout<<" lev1 find best num fail!!!!!! too many solutions"<<std::endl;   
 return;
 }


#if 1
 
 for (int i= 0; i <num; i++) {
    
   //    tn_vec[i]=tt_vec[i];
   tt_best_vec.push_back(tn_best_vec[i]);
  }

 
 //////////////check lost length //////////////////////
std::vector<int> flag_lost_vec;

 for (int nn= 0; nn< tt_best_vec.size(); nn++) {
   
   
   if(tt_best_vec[nn].size()>0){
     int tm_flag=0;
     for (int i= 0; i< tt_best_vec[nn].size(); i++) {
       if(tt_best_vec[nn][i]>0){
	 tm_flag=1;
	 flag_lost_vec.push_back(tm_flag);
	 break;
       };
       
     }
     
     if(tm_flag==0){  flag_lost_vec.push_back(0);}
   }

 }

 
 /*
for (Int_t i= 0; i <flag_lost_vec.size(); i++)

  {

    std::cout<<"/////////check lost length ////////////////////// "<<std::endl;
    std::cout<<flag_lost_vec[i]<<std::endl;
    std::cout<<"/////////check lost length end////////////////////// "<<std::endl;
  }
 */
 

 
 //////////////check lost length    end   ///////////////



int  min_num=9999;
//num_best_vec.clear();
std::vector<int> num_best_vec;
 int check_end_flag=0;
 cal_best_num(tt_best_vec,num_best_vec,flag_lost_vec,num_vec, min_num, tm_max, size, check_end_flag,num,max_vec,min_vec);





 /*
 for (Int_t i= 0; i< 4; i++) {
   std::cout<<num_best_vec[i]<<std::endl;

 }

 */
for (int i= 0; i< num_best_vec.size(); i++) {

  num_final_vec.push_back(num_best_vec[i]);
 }

 std::cout<<"min_num="<<min_num<<std::endl;
std::cout<<"//////////// material number  ///////"<<std::endl;
for (int i= 0; i< num_final_vec.size(); i++) {
  std::cout<<num_final_vec[i]<<"   ";
  // num_final_vec.push_back(num_best_vec[i]);
 }

 std::cout<<std::endl;
 /*
 if(num_best_vec.size()==4){


   std::cout<<num_best_vec[0]<<"   "<<num_best_vec[1]<<"  "<<num_best_vec[2]<<"  "<<num_best_vec[3]<<std::endl;     
 }
 */
 end_flag=0;
 end_flag=check_end(flag_lost_vec,check_end_flag);


 std::cout<<"//////////// lev1 end  ///////"<<std::endl;
 // if (end_flag==1){return;}


 
 //std::cout<<"//////////// lev1 end  ///////"<<std::endl;
 
//////lev1 find best number end //////////

//////////////////////////////////////////
//
//
//
//
////////////////////////////////////////////
   int iEndTime = time(NULL);

   std::cout<<"////////////time="<<iEndTime-iStartTime<<"S/////////////"<<std::endl;
   if (end_flag==1){return;}


#endif
}
