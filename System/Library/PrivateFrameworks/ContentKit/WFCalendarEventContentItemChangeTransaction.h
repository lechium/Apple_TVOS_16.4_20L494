//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFContentItemChangeTransaction.h"

@class EKEvent, EKEventStore;

__attribute__((visibility("hidden")))
@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction
{
    EKEvent *_mutableEvent;	// 8 = 0x8
    EKEventStore *_eventStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d4c61
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) EKEvent *mutableEvent; // @synthesize mutableEvent=_mutableEvent;
- (void)removeAllAttachments;	// IMP=0x00000000000d4a8c
- (void)addAttachments:(id)arg1;	// IMP=0x00000000000d47ae
- (void)updateAttachments:(id)arg1;	// IMP=0x00000000000d46d9
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;	// IMP=0x00000000000d44f0
- (id)initWithContentItem:(id)arg1 eventStore:(id)arg2;	// IMP=0x00000000000d4338

@end

