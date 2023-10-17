//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDThreadNetworkMetadataStore <NSObject>
- (void)removePreferredNetworkWithCompletion:(void (^)(NSError *))arg1;
- (void)triggerPreferredNetworkUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)retrieveMetadataWithCompletion:(void (^)(HMThreadNetworkMetadata *, NSError *))arg1;
@end

