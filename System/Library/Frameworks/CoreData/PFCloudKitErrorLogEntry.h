//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitErrorLogEntry : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSString *_annotation;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000180613
- (id)initWithError:(id)arg1 annotation:(id)arg2;	// IMP=0x00000000001805c6

@end

