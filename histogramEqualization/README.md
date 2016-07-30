README.md

操作說明：
開啟專案直接執行，即可顯示原始圖片(/histogramEqualization/data/home.jpg)的直方圖分布圖

編譯環境：
Xcode 7.2
OpenCV 3.1.0

編譯環境設定：
1. Header Search Paths: /usr/local/include /opt/local/include
2. Library Search Paths: /usr/local/lib /opt/local/lib
3. Other Linker Flags: -lopencv_calib3d -lopencv_highgui -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_video -lopencv_videoio -lopencv_videostab -lopencv_core

tree:
.
├── build
│
├── data
│   ├── home.jpg
│   └── lena.jpg
├── histogramEqualization
│   
└── histogramEqualization.xcodeproj

概念：
    直方圖均化就是把原本集中在某區塊的機率函數(PDF)平均分布在所有顏色上面,也就是變成圖一最下面那張直方圖,這樣會增加圖片的對比度
    目的是要把所有顏色個數平分,也就是把直方圖機率比較高的值分給附近的值,並把原先在機率高值附近的值往後推到後面的顏色



Reference:
    1. 參考程式
    http://www.programming-techniques.com/2013/01/histogram-equalization-using-c-image.html
    2. 直方圖均衡化理論
    http://goo.gl/0RTtVH
    

