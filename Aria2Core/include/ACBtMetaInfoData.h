//
//  ACBtMetaInfoData.h
//  Aria2Core
//
//  Created by Eugene Istratov on 18.03.2018.
//  Copyright © 2018 Eugene Istratov. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    ACBtFileModeNone,
    ACBtFileModeSingle,
    ACBtFileModeMultiple
} ACBtFileMode;

@interface ACBtMetaInfoData : NSObject

@property (nonatomic, copy) NSArray<NSArray<NSString *> *> * announceList;
@property (nonatomic, copy) NSString * comment;
@property (nonatomic, copy) NSDate * creationDate;
@property (nonatomic) ACBtFileMode mode;
@property (nonatomic, copy) NSString * name;

@end
