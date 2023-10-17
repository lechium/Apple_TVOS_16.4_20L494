//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, _TtC12GameCenterUI17NicknamePresenter;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI22PlayerProfilePresenter
{
    MISSING_TYPE *profileType;	// 3696848 = 0x3868d0
    MISSING_TYPE *pageContext;	// 110381 = 0x1af2d
    MISSING_TYPE *pageMericsPresenter;	// 3696848 = 0x3868d0
    MISSING_TYPE *requiredDataPresenter;	// 0 = 0x0
    MISSING_TYPE *nicknamePresenter;	// 0 = 0x0
    MISSING_TYPE *nicknameUpdatedSubscription;	// 0 = 0x0
    MISSING_TYPE *primarySections;	// 0 = 0x0
    MISSING_TYPE *secondarySections;	// 0 = 0x0
    MISSING_TYPE *sections;	// 0 = 0x0
    MISSING_TYPE *requiredData;	// 0 = 0x0
    MISSING_TYPE *onNicknameChanged;	// 2 = 0x2
    MISSING_TYPE *onShowAvatarEditor;	// 0 = 0x0
}

+ (_Bool)isSettings;	// IMP=0x0040000000161020
- (void).cxx_destruct;	// IMP=0x000000000016ea20
- (id)initWithPlayerId:(id)arg1;	// IMP=0x000000000016e8b0
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;	// IMP=0x000000000016e830
- (void)didSignOut;	// IMP=0x000000000016e800
- (void)showAvatarEditor;	// IMP=0x000000000016e590
- (void)signIntoGameCenter;	// IMP=0x000000000016e3c0
- (void)setAllowsNearByMultiplayerInvites:(_Bool)arg1;	// IMP=0x000000000016de20
- (void)updateSnapshot;	// IMP=0x000000000016ddf0
- (void)profileSettings;	// IMP=0x0000000000164480
- (void)showRecentlyPlayedWithFriends;	// IMP=0x0000000000163ed0
- (void)removeFriend;	// IMP=0x0000000000163970
- (void)reportPlayer;	// IMP=0x0000000000163440
@property(nonatomic) _Bool displayInSplitView;
@property(nonatomic, retain) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter; // @synthesize nicknamePresenter;
@property(nonatomic, readonly) _Bool isSignedIn;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) _Bool wantsHiddenTitle;
@property(nonatomic, readonly) _Bool wantsHiddenNavigationBar;

@end
