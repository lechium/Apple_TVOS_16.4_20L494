//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor;
@protocol SDAirDropInformationDelegate;

@interface SDAirDropInformation : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    id <SDAirDropInformationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a832d
@property __weak id <SDAirDropInformationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00100000000a82e8
- (void)start;	// IMP=0x00100000000a82ab
- (void)removeObservers;	// IMP=0x00100000000a8258
- (void)addObservers;	// IMP=0x00100000000a811f
- (void)somethingChanged:(id)arg1;	// IMP=0x00100000000a810d
- (void)setInformationAndNotify;	// IMP=0x00100000000a7dc1
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00100000000a7ca8
- (_Bool)boolValue:(void *)arg1;	// IMP=0x00100000000a7c6e
- (void)dealloc;	// IMP=0x00100000000a7c30
- (id)init;	// IMP=0x00100000000a7ba7

@end

