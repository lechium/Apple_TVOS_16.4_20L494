//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString;

@protocol PREResponsesProtocol
- (void)registerResponse:(NSString *)arg1 position:(NSNumber *)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(NSString *)arg5 modelConfigPath:(NSString *)arg6 vocabPath:(NSString *)arg7;
- (void)preResponseItemsForMessage:(NSString *)arg1 maximumResponses:(unsigned long long)arg2 conversationTurns:(NSArray *)arg3 context:(NSString *)arg4 time:(NSDate *)arg5 language:(NSString *)arg6 recipientHandles:(NSArray *)arg7 modelFilePath:(NSString *)arg8 modelConfigPath:(NSString *)arg9 espressoBinFilePath:(NSString *)arg10 vocabFilePath:(NSString *)arg11 registerDisplayed:(_Bool)arg12 includeCustomResponses:(_Bool)arg13 includeResponsesToRobots:(_Bool)arg14 completion:(void (^)(NSArray *, NSError *))arg15;
@end

