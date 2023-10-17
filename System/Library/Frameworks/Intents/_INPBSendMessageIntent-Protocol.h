//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBSendMessageAttachment, _INPBString;

@protocol _INPBSendMessageIntent <NSObject>
+ (Class)recipientType;
+ (Class)attachmentsType;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataString *speakableGroupName;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(copy, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) _Bool hasSender;
@property(retain, nonatomic) _INPBContact *sender;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) _Bool hasOutgoingMessageType;
@property(nonatomic) int outgoingMessageType;
@property(readonly, nonatomic) _Bool hasNotificationThreadIdentifier;
@property(copy, nonatomic) NSString *notificationThreadIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBString *groupName;
@property(nonatomic) _Bool hasEffect;
@property(nonatomic) int effect;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
@property(retain, nonatomic) _INPBString *content;
@property(readonly, nonatomic) unsigned long long attachmentsCount;
@property(copy, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) _Bool hasAlternativeConversationIdentifier;
@property(copy, nonatomic) NSString *alternativeConversationIdentifier;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
- (int)StringAsOutgoingMessageType:(NSString *)arg1;
- (NSString *)outgoingMessageTypeAsString:(int)arg1;
- (int)StringAsEffect:(NSString *)arg1;
- (NSString *)effectAsString:(int)arg1;
- (_INPBSendMessageAttachment *)attachmentsAtIndex:(unsigned long long)arg1;
- (void)addAttachments:(_INPBSendMessageAttachment *)arg1;
- (void)clearAttachments;
@end
