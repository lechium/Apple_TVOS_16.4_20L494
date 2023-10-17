//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SocialLayer/NSObject-Protocol.h>

@class NSData, NSString, NSUUID;

@protocol SLDShareableContentServiceProtocol <NSObject>
- (void)shareCollaborationData:(NSData *)arg1 faceTimeConversationUUID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)presentMessageComposeSheetForSourceIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)loadDataRepresentationFromSourceIdentifier:(NSString *)arg1 requestedTypeIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)loadInPlaceFileRepresentationFromSourceIdentifier:(NSString *)arg1 requestedTypeIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)retrieveShareableContentMetadataWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end
