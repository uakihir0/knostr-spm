// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "knostr",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "knostr",
            targets: ["knostr"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "knostr",
            path: "./knostr.xcframework"
        ),
    ]
)
