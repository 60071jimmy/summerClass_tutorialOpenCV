README.md

本範例程式 Smoothing.cpp 參考此書(ISBN:978-986-434-027-9)範例程式

操作說明：
    開啟專案直接執行，即會對原始圖片(smoothing/image/lena.jpg)進行四種平滑化的處理。
    其四種處理分別為：
        1. Homogeneous Blur
        2. Gaussian Blur
        3. Median Blur
        4. Bilateral Blur
    1.5秒會自動切換一個影像平滑演算法，當任意按鍵被按下程式將會終止。

編譯環境：
    Xcode 7.2
    OpenCV 3.1.0

編譯環境設定：
    1. Header Search Paths: /usr/local/include /opt/local/include
    2. Library Search Paths: /usr/local/lib /opt/local/lib
    3. Other Linker Flags: -lopencv_calib3d -lopencv_highgui -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_video -lopencv_videoio -lopencv_videostab -lopencv_core

tree:
.
├── README.md
├── build
│   ├── Debug
│   │   └── smoothing
│   └── smoothing.build
│       
├── image
│   └── lena.jpg
├── smoothing
│   └── Smoothing.cpp
└── smoothing.xcodeproj


