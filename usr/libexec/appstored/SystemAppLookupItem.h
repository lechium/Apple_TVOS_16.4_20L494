//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSNumber, NSString, NSURL;

@interface SystemAppLookupItem : NSObject
{
    _Bool _streamableZip;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_downloadOffset;	// 24 = 0x18
    NSNumber *_downloadSize;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSNumber *_hashType;	// 48 = 0x30
    NSArray *_hashes;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSURL *_URL;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000c3975

@end

