//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;
@protocol SDNetworkEjecterDelegate;

@interface SDNetworkEjecter : NSObject
{
    struct __SFNode *_node;	// 8 = 0x8
    int _mountedCount;	// 16 = 0x10
    int _ejectedCount;	// 20 = 0x14
    NSNumber *_flags;	// 24 = 0x18
    MISSING_TYPE *_protocol;	// 32 = 0x20
    id <SDNetworkEjecterDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d7931
@property __weak id <SDNetworkEjecterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void)stop;	// IMP=0x00100000000d7883
- (int)start;	// IMP=0x00100000000d77d8
- (void)eject;	// IMP=0x00100000000d75c5
- (void)ejectMountPoints:(id)arg1 useAssistant:(_Bool)arg2;	// IMP=0x00100000000d75bf
- (void)notifyClientAboutEject:(int)arg1;	// IMP=0x00100000000d7455
- (void)dealloc;	// IMP=0x00100000000d741b
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x00100000000d73a0

@end

