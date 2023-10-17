//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMMessageItem.h>

@interface IMMessageItem (IMCoreDescription)
+ (id)displayNameForAddress:(id)arg1;	// IMP=0x0080000000067844
+ (_Bool)isLoginAddress:(id)arg1;	// IMP=0x00800000000677e5
+ (id)handleForAddress:(id)arg1;	// IMP=0x0080000000067738
+ (id)bestAccountForAddress:(id)arg1;	// IMP=0x0080000000067605
+ (Class)contextClass;	// IMP=0x00800000000d67cf
+ (_Bool)isIncomingTypingOrCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;	// IMP=0x008000000011a63f
+ (_Bool)isTypingOrCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;	// IMP=0x008000000011a612
+ (_Bool)isCancelTypingMessage:(unsigned long long)arg1 isEditedMessage:(_Bool)arg2;	// IMP=0x008000000011a5ec
+ (_Bool)isIncomingTypingMessage:(unsigned long long)arg1;	// IMP=0x008000000011a5d6
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 messageDataSource:(CDUnknownBlockType)arg3 attachmentDataSource:(CDUnknownBlockType)arg4;	// IMP=0x00100000000673f8
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 senderDisplayName:(id)arg3 messageDataSource:(CDUnknownBlockType)arg4 attachmentDataSource:(CDUnknownBlockType)arg5;	// IMP=0x0010000000067540
- (id)_copyWithFlags:(unsigned long long)arg1;	// IMP=0x00100000000d69fe
- (id)_copy;	// IMP=0x00100000000d69cd
- (_Bool)_isInvitation;	// IMP=0x00100000000d6989
- (void)_setInivtation:(_Bool)arg1;	// IMP=0x00100000000d693d
- (id)message;	// IMP=0x00100000000d67e0
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1 chatContext:(id)arg2;	// IMP=0x00100000001171e7
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1;	// IMP=0x00100000001171d3
- (id)_service;	// IMP=0x0010000000117142
- (id)_newChatItemsWithChatContext:(id)arg1;	// IMP=0x0010000000116a47
- (id)_newChatItems;	// IMP=0x0010000000116a33
- (_Bool)_hasMessageChatItem;	// IMP=0x00100000001169e5
- (_Bool)isIncomingTypingOrCancelTypingMessage;	// IMP=0x001000000011a747
- (_Bool)isTypingOrCancelTypingMessage;	// IMP=0x001000000011a6f4
- (_Bool)isCancelTypingMessage;	// IMP=0x001000000011a6a1
- (_Bool)isIncomingTypingMessage;	// IMP=0x001000000011a66c
@end
