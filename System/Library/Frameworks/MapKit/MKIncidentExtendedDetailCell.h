//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKTableViewCell.h"

@class GEOComposedRouteAdvisoryItem, NSString, UIImageView, UIStackView;

__attribute__((visibility("hidden")))
@interface MKIncidentExtendedDetailCell : MKTableViewCell
{
    UIStackView *_stackView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    GEOComposedRouteAdvisoryItem *_advisoryItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000830ef
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000083081
- (void)_setConstraints;	// IMP=0x0000000000082b83
- (id)customBodyTextView;	// IMP=0x000000000008290f
- (void)configureWithAdvisoryItem:(id)arg1;	// IMP=0x0000000000081cae
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000081a05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

