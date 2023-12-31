//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MNAudioEventQueueDelegate;

__attribute__((visibility("hidden")))
@interface MNAudioSystemEventQueue : NSObject
{
    NSMutableArray *_container;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
    id <MNAudioEventQueueDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009ec8d
@property(nonatomic) __weak id <MNAudioEventQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_dequeue;	// IMP=0x000000000009eb98
- (void)_enqueue:(id)arg1;	// IMP=0x000000000009ead2
- (void)clear;	// IMP=0x000000000009ea55
- (id)dequeue;	// IMP=0x000000000009e9bc
- (void)_removeEventsMatching:(id)arg1;	// IMP=0x000000000009e833
- (_Bool)enqueue:(id)arg1 withOptions:(unsigned long long)arg2 andReport:(out id *)arg3;	// IMP=0x000000000009e368
@property(readonly, nonatomic) _Bool full;
@property(readonly, nonatomic) _Bool empty;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long capacity;
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000009e1f1

@end

