//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetrics : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSMutableDictionary *_entries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011bf05
- (void)write;	// IMP=0x000000000011bdad
- (void)addMessage:(id)arg1 data:(id)arg2;	// IMP=0x000000000011bce4
- (void)dealloc;	// IMP=0x000000000011bca6
- (id)initWithPath:(id)arg1;	// IMP=0x000000000011bc14

@end

