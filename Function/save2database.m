 function save2database(s,fs,centroid,speaker_id,row,name)
 
 load("database.dat","-mat");
  
% row = 2;
% speaker_id = 2;
% centroid =16;
% name = 'someone';

i = row;
id = speaker_id;
k = centroid*2;
s(s==0)=[];
 
mfcc = mymfcc(s,fs);
code = vqlbg(mfcc, k,2);

data_save{i,1} = code;
data_save{i,2} = speaker_id;
data_save{i,3} = name;


save('database.dat','data_save','k','-append');
%run('database2cfile.m');

 end