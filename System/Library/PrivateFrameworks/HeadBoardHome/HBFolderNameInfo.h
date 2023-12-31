//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HBFolderNameInfo : NSObject
{
    NSArray *_folderNames;	// 8 = 0x8
    NSString *_fallbackFolderName;	// 16 = 0x10
}

+ (id)localizedDefaultFolderName;	// IMP=0x0040000000015d5c
+ (id)proposedFolderNameWithTargetFolderNameInfo:(id)arg1 editingFolderNameInfo:(id)arg2;	// IMP=0x0040000000015b1a
- (void).cxx_destruct;	// IMP=0x0000000000015d90
@property(readonly, nonatomic) NSString *fallbackFolderName; // @synthesize fallbackFolderName=_fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames; // @synthesize folderNames=_folderNames;
- (id)description;	// IMP=0x0000000000015a70
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000001594f
- (id)initWithApplication:(id)arg1;	// IMP=0x00000000000157f3

@end

