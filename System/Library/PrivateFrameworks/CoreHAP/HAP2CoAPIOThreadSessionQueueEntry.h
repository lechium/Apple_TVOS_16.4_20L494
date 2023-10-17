//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface HAP2CoAPIOThreadSessionQueueEntry : NSObject
{
    struct coap_session_t *_session;	// 8 = 0x8
    NSDate *_startTime;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017f96b
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) struct coap_session_t *session; // @synthesize session=_session;
- (_Bool)reapSession:(id)arg1;	// IMP=0x000000000017f8af
- (id)initWithSession:(struct coap_session_t *)arg1 startTime:(id)arg2;	// IMP=0x000000000017f839

@end

