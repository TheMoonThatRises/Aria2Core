// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Aria2Core",
    platforms: [.macOS(.v12)],
    products: [
        .library(
            name: "Aria2Core",
            targets: ["Aria2Core"]),
    ],
    targets: [
        .target(
            name: "Aria2Core",
            path: "Aria2Core")
    ],
    swiftLanguageVersions: [.v5],
    cxxLanguageStandard: .cxx11
)
