//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class IMMessage, IMMessageItem;

@interface NSArray (IMItems)
@property(readonly, nonatomic) IMMessageItem *lastMessageItem;
@property(readonly, nonatomic) IMMessageItem *firstMessageItem;
- (_Bool)equivalentToRecipients:(id)arg1;	// IMP=0x003000000005c4a0
- (id)indexesOfPartsOfMessageItem:(id)arg1;	// IMP=0x0030000000081e24
- (id)indexesOfPartsOfMessage:(id)arg1;	// IMP=0x0030000000081c8e
- (id)__imItems;	// IMP=0x00300000000d8630
- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00300000000d84c7
@property(readonly, nonatomic) IMMessageItem *__imLastMessageItem;
- (id)messages;	// IMP=0x00300000000d82eb
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00300000000d81db
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) IMMessage *firstMessage;
@end

