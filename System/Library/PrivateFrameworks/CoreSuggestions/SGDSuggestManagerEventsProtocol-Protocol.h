//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class NSArray, NSLocale, NSString, NSURL, SGSuggestedEventLaunchInfo;

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)isEventCandidateForURL:(NSURL *)arg1 andTitle:(NSString *)arg2 containsSchemaOrg:(_Bool)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)isEventCandidateForURL:(NSURL *)arg1 title:(NSString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)schemaOrgToEvents:(NSArray *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(SGSuggestedEventLaunchInfo *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(NSString *)arg1 sourceURL:(NSURL *)arg2 clientLocale:(NSLocale *)arg3 ignoreUserActivitySupport:(_Bool)arg4 ignoreMailCheck:(_Bool)arg5 completion:(void (^)(SGXPCResponse1 *))arg6;
- (void)eventFromUniqueId:(NSString *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
@end

