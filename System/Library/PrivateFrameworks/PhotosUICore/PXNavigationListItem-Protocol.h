//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, NSString, PHCollection;
@protocol PXAnonymousViewController, PXDisplayAssetFetchResult, PXGridPresentation;

@protocol PXNavigationListItem <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *visualDescription;
@property(copy, nonatomic) NSString *badgeString;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) id representedObject;
@property(readonly, nonatomic) PHCollection *collection;
@property(readonly, nonatomic) long long indentationLevel;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic, getter=isGroup) _Bool group;
@property(readonly, nonatomic) unsigned long long lockState;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
@property(readonly, nonatomic, getter=isDeletable) _Bool deletable;
@property(readonly, nonatomic, getter=isRenamable) _Bool renamable;
@property(readonly, nonatomic, getter=isRemovable) _Bool removable;
@property(readonly, nonatomic, getter=isReorderable) _Bool reorderable;
@property(readonly, nonatomic, getter=isDraggable) _Bool draggable;
@property(readonly, nonatomic) NSString *accessoryGlyphImageName;
@property(readonly, nonatomic) NSString *glyphImageName;
@property(readonly, nonatomic) NSString *accessoryTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;

@optional
- (NSObject<PXAnonymousViewController> *)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1 existingAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg2;
- (NSString *)cpAnalyticsEventName;
@end

