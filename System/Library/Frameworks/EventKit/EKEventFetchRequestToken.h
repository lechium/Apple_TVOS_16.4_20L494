//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventFetchRequestToken : NSObject
{
    unsigned int _token;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000600c5
@property(readonly, nonatomic) unsigned int token; // @synthesize token=_token;
@property(readonly, nonatomic) __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void)cancel;	// IMP=0x000000000006002b
- (id)initWithEventStore:(id)arg1 token:(int)arg2;	// IMP=0x000000000005ffbc

@end
