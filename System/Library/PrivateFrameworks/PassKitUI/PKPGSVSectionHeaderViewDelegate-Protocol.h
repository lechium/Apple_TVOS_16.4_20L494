//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPGSVSectionHeaderView, PKPass;

@protocol PKPGSVSectionHeaderViewDelegate <NSObject>
- (unsigned long long)inboxBadgeCountForSectionHeaderView:(PKPGSVSectionHeaderView *)arg1;
- (_Bool)inboxVisibleForSectionheaderView:(PKPGSVSectionHeaderView *)arg1;
- (void)presentInvitationsForHeaderView:(PKPGSVSectionHeaderView *)arg1;
- (void)presentPassDetailsForHeaderView:(PKPGSVSectionHeaderView *)arg1;
- (PKPass *)passForSectionHeaderView:(PKPGSVSectionHeaderView *)arg1;
@end
