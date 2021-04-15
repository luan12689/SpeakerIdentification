code = training('C:\Users\Hi\Desktop\LVTN\GUI_matlab\Password\',9);

% for ll = 1:length(word)
%     v = mymfcc(word{ll},fs);

            distmin = inf;
            k1 = 0;
           
            for l = 1:length(code)      % each trained codebook, compute distortion
                d = disteu(v, code{l},2); 
                dist = sum(min(d,[],2)) / size(d,1);
                
%                 app.distance2excel(l) = dist;
                
%                 file = sprintf('%ss%d.wav', app.trainpasswordpath, l);
%                 app.TextArea.Value = [string(app.TextArea.Value);file;"Distance:";num2str(dist)];
                
                if dist < distmin
                    distmin = dist;
                    k1 = l;
                    
                end 
            end  
               
%          message = sprintf("Matches with %d",k1);   
           disp(k1);
%          app.TextArea.Value = [string(app.TextArea.Value);message];



