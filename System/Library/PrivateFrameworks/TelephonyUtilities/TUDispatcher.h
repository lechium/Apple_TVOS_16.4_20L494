//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)dispatcherWithQueue:(id)arg1;	// IMP=0x00600000000185e4
+ (id)dispatcherWithIdentifier:(id)arg1;	// IMP=0x0060000000018593
- (void).cxx_destruct;	// IMP=0x0000000000018a66
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (CDUnknownBlockType)qosUserInteractiveDispatchBlockForBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018a3b
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000189d0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000001894a
- (void)boostQualityOfService;	// IMP=0x00000000000187d6
- (void)dispatchAsynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018776
- (void)dispatchSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018716
- (id)init;	// IMP=0x0000000000018635

@end
