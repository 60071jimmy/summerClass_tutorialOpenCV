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

Reference:
    http://www.programming-techniques.com/2013/01/histogram-equalization-using-c-image.html


