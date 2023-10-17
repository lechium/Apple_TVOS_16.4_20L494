//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKActivity, GKThreadsafeDictionary, NSError, NSString;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    GKThreadsafeDictionary *_values;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id result;	// 40 = 0x28
    int _sequence;	// 48 = 0x30
    _Bool _loggingEnabled;	// 52 = 0x34
    id _result;	// 56 = 0x38
    GKActivity *_activity;	// 64 = 0x40
}

+ (id)mainQueue;	// IMP=0x00400000001a15ac
+ (id)backgroundConcurrentQueue;	// IMP=0x00100000001a1599
+ (id)defaultConcurrentQueue;	// IMP=0x00100000001a158b
+ (id)dispatchGroup;	// IMP=0x001000000019ff22
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x001000000019fef3
+ (void)waitUntilDone:(CDUnknownBlockType)arg1;	// IMP=0x001000000019fc01
@property(retain) GKActivity *activity; // @synthesize activity=_activity;
// Error: Property attributes should begin with the type ('T') attribute, property name: loggingEnabled
// Property attributes: (null)

- (_Bool)isLoggingEnabled;	// IMP=0x00100000001a170b
@property(retain) id result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)allValues;	// IMP=0x00100000001a16af
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000001a1699
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00100000001a1649
- (id)_values;	// IMP=0x00100000001a15b9
- (void)join:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a12fc
- (long long)_waitWithDispatchTimeout:(unsigned long long)arg1;	// IMP=0x00100000001a0d1a
- (long long)waitWithTimeout:(double)arg1;	// IMP=0x00100000001a0ce4
- (void)wait;	// IMP=0x00100000001a0c74
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a0c58
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a0665
- (void)leave;	// IMP=0x00100000001a0657
- (void)enter;	// IMP=0x00100000001a0649
- (void)perform:(CDUnknownBlockType)arg1;	// IMP=0x001000000019ffd2
- (id)description;	// IMP=0x001000000019ff50
- (void)dealloc;	// IMP=0x001000000019fe86
- (id)initWithName:(id)arg1;	// IMP=0x001000000019fdf7
- (id)init;	// IMP=0x001000000019fc52

@end
