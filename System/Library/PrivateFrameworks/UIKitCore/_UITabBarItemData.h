//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIColor, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface _UITabBarItemData
{
    long long _style;	// 8 = 0x8
    NSDictionary *_titleTextAttributes[5];	// 16 = 0x10
    NSDictionary *_badgeTextAttributes[5];	// 56 = 0x38
    UIColor *_iconColor[5];	// 96 = 0x60
    UIColor *_badgeBackgroundColor[5];	// 136 = 0x88
    struct UIOffset _titlePositionAdjustment[5];	// 176 = 0xb0
    struct UIOffset _badgePositionAdjustment[5];	// 256 = 0x100
    struct UIOffset _badgeTitlePositionAdjustment[5];	// 336 = 0x150
    struct {
        unsigned int hasUserTitleFont:1;
        unsigned int hasUserTitleColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserIconColor:1;
        unsigned int hasUserBadgePosition:1;
        unsigned int hasUserBadgeBackgroundColor:1;
        unsigned int hasUserBadgeTitleFont:1;
        unsigned int hasUserBadgeTitleColor:1;
        unsigned int hasUserBadgeTitlePosition:1;
    } _stateFlags[5];	// 416 = 0x1a0
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x006000000101f383
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x006000000101cc1c
- (void).cxx_destruct;	// IMP=0x0000000001021ee4
@property(readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
- (void)setBadgeTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x00000000010217f7
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000001021776
- (void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000102166c
- (id)badgeTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000001021477
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x0000000001021463
- (void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2;	// IMP=0x00000000010213e2
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x000000000102134c
- (void)setBadgePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x00000000010212e6
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000001021267
- (void)setIconColor:(id)arg1 forState:(long long)arg2;	// IMP=0x00000000010211e9
- (id)iconColorForState:(long long)arg1;	// IMP=0x000000000102117e
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000001021118
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000001021099
- (_Bool)titleTextAttributesSpecifyColorForState:(long long)arg1;	// IMP=0x0000000001021041
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000001020f3e
- (id)titleTextAttributesForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000001020d45
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x0000000001020d31
- (id)_fallbackBadgeTitleColorForState:(long long)arg1;	// IMP=0x0000000001020cb4
- (id)_fallbackBadgeTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000001020a60
- (id)_fallbackTitleColorForState:(long long)arg1;	// IMP=0x00000000010209fc
- (id)_fallbackTitleFontForState:(long long)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x00000000010207c3
- (id)replicate;	// IMP=0x00000000010205be
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x000000000102015d
- (long long)hashInto:(long long)arg1;	// IMP=0x00000000010200d4
- (void)describeInto:(id)arg1;	// IMP=0x000000000101fd27
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101f56d
- (void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101ede6
- (void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101e853
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101e2c0
- (void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101de29
- (void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101d997
- (void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101d35c
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000101cd54

@end

