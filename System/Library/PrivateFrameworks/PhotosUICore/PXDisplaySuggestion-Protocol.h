//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol PXDisplayAssetFetchResult;

@protocol PXDisplaySuggestion <NSObject, NSCopying>
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSDictionary *actionProperties;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) unsigned short state;
- (id <PXDisplayAssetFetchResult>)fetchKeyAssets;
@end

