//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASDDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultQueue;	// IMP=0x0010000000034123
- (void).cxx_destruct;	// IMP=0x00000000000341a8
- (void)syncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034197
- (void)asyncUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034186
- (void)assertQueue;	// IMP=0x0000000000034178
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000340b8
- (id)initWithName:(id)arg1;	// IMP=0x0000000000033f57
- (id)init;	// IMP=0x0000000000033ec2
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000496f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

