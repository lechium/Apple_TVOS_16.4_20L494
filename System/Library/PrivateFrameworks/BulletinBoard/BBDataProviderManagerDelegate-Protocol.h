//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProvider, BBDataProviderManager, BBParentSectionDataProviderFactory, BBSectionInfo, NSString;

@protocol BBDataProviderManagerDelegate <NSObject>
- (BBSectionInfo *)dpManager:(BBDataProviderManager *)arg1 sectionInfoForSectionID:(NSString *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 removeDataProviderSectionID:(NSString *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 addDataProvider:(BBDataProvider *)arg2 withSectionInfo:(BBSectionInfo *)arg3;
@end

