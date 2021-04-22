% password = [1 2 2 4 5 6];
% 
% for i = 1: 6
%     word{i} = i;
% end    
% 
% [count,x] = checkpass(word,password);
% message = sprintf('x= %d,k = %d',x,count);
% disp (message);
% 
% function [k,flag] = checkpass(word,password) 
%     k = 0;
%     
%     for jj = 1:length(password)
%         if (word{jj} == password(jj))
%             k=k+1;
%             disp ('match');
%         else
%             disp ('no match');
%             break;   
%         end
%     end
% 
%     if (k == length(password))
%         flag = 1;
%     else
%         flag = 0;
%     end
% end    
% 
% % 
% % 
% j = 0;
% for i = 3:5
%     j=j+1
%     a(j)=i;
%     disp(a);
% end

a = 123456;








