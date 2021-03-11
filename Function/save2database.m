% function save2database(s,fs,centroid,speaker_id,stt)
stt = 1;
speaker_id = 1;
centroid =16;



i = stt;
id = speaker_id;
k = centroid*2;
s(s==0)=[];

mfcc = mymfcc(s,fs);
code = vqlbg(mfcc, k,2);

data_save{i,1} = code;
data_save{i,2} = speaker_id;
data_save{i,3} = 'luan';
data_save{i,4} = s;

save('database.dat','data_save','k','-append');
%run('database2cfile.m');

% end