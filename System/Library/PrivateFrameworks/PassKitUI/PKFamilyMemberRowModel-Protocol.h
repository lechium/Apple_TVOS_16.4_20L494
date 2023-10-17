//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKFamilyMember, UIImage;
@protocol PKFamilyMemberRowModel;

@protocol PKFamilyMemberRowModel <NSObject>
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *titleText;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) PKFamilyMember *familyMember;
- (long long)cellStyle;
- (long long)accessoryType;
- (long long)compare:(id <PKFamilyMemberRowModel>)arg1;
- (id)initWithFamilyMember:(PKFamilyMember *)arg1;
@end

