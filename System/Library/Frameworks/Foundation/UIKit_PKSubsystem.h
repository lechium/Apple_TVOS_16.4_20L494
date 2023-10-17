//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKit_PKSubsystem : NSObject
{
    _Bool _initialized;	// 8 = 0x8
    _Bool _plugInKitProcess;	// 9 = 0x9
    NSDictionary *_infoDictionary;	// 16 = 0x10
}

+ (id)initForPlugInKit;	// IMP=0x00100000005dc291
+ (id)initForPlugInKitWithOptions:(id)arg1;	// IMP=0x00100000005dc278
+ (id)sharedInstance;	// IMP=0x00100000005dc1e0
@property(nonatomic, getter=isPlugInKitProcess) _Bool plugInKitProcess; // @synthesize plugInKitProcess=_plugInKitProcess;
@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (void)endUsing:(id)arg1;	// IMP=0x00000000005dc1da
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;	// IMP=0x00000000005dbfbf
- (void)dealloc;	// IMP=0x00000000005dbf61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
