# Stats
Stats - Программа для отслеживания работоспособности сервисов.
На данный момент всего 4-мя сервисами может управлять Stats

      - Nginx(Закончено)
	  - Wings - Pterodactyl Daemon(Закончено)
	  - MySQL(Закончено)
	  - Redis(Не готово)
	  - htop(Закончено)
Для установки,  введите:
```git clone https://github.com/Mr666dd/Stats && cd Stats/```
```chmod 777 install-stats && ./install-stats```
 - Если вы хотите использовать Stats командой **stats**,
 - Вам необходимо создать файл в 
   /usr/local/bin/
 - С названием stats. В нём должно быть содержимое:
      - ``` #!/bin/bash ```
      - ```sudo /usr/share/stats/a.out```
