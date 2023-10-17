//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol IMDaemonChatMessageHistoryProtocol <NSObject>
- (void)loadUncachedAttachmentCountForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadUnreadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(long long)arg4 fallbackGUID:(NSString *)arg5 chatId:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)loadFrequentRepliesForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(long long)arg4 chatID:(NSString *)arg5 queryID:(NSString *)arg6;
- (void)markAsSpamForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5 autoReport:(_Bool)arg6;
- (void)loadPagedHistoryForGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 onServices:(NSArray *)arg4 numberOfMessagesBefore:(long long)arg5 numberOfMessagesAfter:(long long)arg6 threadIdentifier:(NSString *)arg7 chatID:(NSString *)arg8 queryID:(NSString *)arg9;
- (void)loadHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(long long)arg4 beforeGUID:(NSString *)arg5 afterGUID:(NSString *)arg6 threadIdentifier:(NSString *)arg7 chatID:(NSString *)arg8 queryID:(NSString *)arg9;
- (void)fetchEarliestMessageDateForChatsWithGUIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)loadRecoverableMessagesMetadataWithQueryID:(NSString *)arg1;
- (void)recoverMessagesWithChatGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)moveMessagesInChatsWithGUIDsToRecentlyDeleted:(NSArray *)arg1 deleteDate:(NSDate *)arg2 queryID:(NSString *)arg3;
- (void)moveMessagesWithGUIDsToRecentlyDeleted:(NSArray *)arg1 deleteDate:(NSDate *)arg2 queryID:(NSString *)arg3;
- (void)updateUnformattedID:(NSString *)arg1 forBuddyID:(NSString *)arg2 onService:(NSString *)arg3;
- (void)cleanupAttachments;
- (void)purgeAttachmentsForChatGUID:(NSString *)arg1;
- (void)retractNotificationsForReadMessagesWithGUIDs:(NSArray *)arg1;
- (void)markChatAsSpamWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 isAutoReport:(_Bool)arg5 reply:(void (^)(unsigned long long))arg6;
- (void)clearHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 beforeGUID:(NSString *)arg4 afterGUID:(NSString *)arg5 chatID:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)deleteMessageWithGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)loadUncachedAttachmentCountForChatWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 reply:(void (^)(unsigned long long))arg5;
- (void)loadFrequentRepliesForChatWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 limit:(long long)arg5 reply:(void (^)(NSArray *))arg6;
- (void)loadAttachmentsForChatWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 reply:(void (^)(NSArray *))arg5;
- (void)loadUnreadHistoryForChatWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 limit:(long long)arg5 fallbackMessageGUID:(NSString *)arg6 reply:(void (^)(NSArray *, NSArray *))arg7;
- (void)loadPagedHistoryAroundMessageWithGUID:(NSString *)arg1 chatGUID:(NSString *)arg2 chatIdentifiers:(NSArray *)arg3 style:(unsigned char)arg4 services:(NSArray *)arg5 numberOfMessagesBefore:(long long)arg6 numberOfMessagesAfter:(long long)arg7 threadIdentifier:(NSString *)arg8 reply:(void (^)(NSArray *, NSArray *, _Bool, _Bool))arg9;
- (void)loadHistoryForChatWithGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 services:(NSArray *)arg4 limit:(long long)arg5 beforeGUID:(NSString *)arg6 afterGUID:(NSString *)arg7 threadIdentifier:(NSString *)arg8 reply:(void (^)(NSArray *, NSArray *))arg9;
- (void)loadMessageItemWithGUID:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)loadMessageWithGUID:(NSString *)arg1 queryID:(NSString *)arg2;
@end

