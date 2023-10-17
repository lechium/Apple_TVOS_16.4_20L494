//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _MKScaleUnitsView : UIView
{
    _Bool _useLightText;	// 8 = 0x8
    double _segmentLengthInPixels;	// 16 = 0x10
    double _unitsWidth;	// 24 = 0x18
    double _justUnitsWidth;	// 32 = 0x20
    NSDictionary *_legendAttributes;	// 40 = 0x28
    NSMutableArray *_strings;	// 48 = 0x30
    NSString *_legendBaseString;	// 56 = 0x38
    NSString *_unitsString;	// 64 = 0x40
    NSString *_unpaddedUnitsString;	// 72 = 0x48
    NSMapTable *_legendStringWidthCache;	// 80 = 0x50
    NSMutableDictionary *_legendStringForDistanceStringCache;	// 88 = 0x58
    NSNumberFormatter *_floatNumberFormatter;	// 96 = 0x60
    NSString *_zeroUnitsString;	// 104 = 0x68
    _Bool _RTL;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000017432d
@property(nonatomic, getter=isRTL) _Bool RTL; // @synthesize RTL=_RTL;
@property(retain, nonatomic) NSNumberFormatter *floatNumberFormatter; // @synthesize floatNumberFormatter=_floatNumberFormatter;
@property(retain, nonatomic) NSString *legendBaseString; // @synthesize legendBaseString=_legendBaseString;
@property(copy, nonatomic) NSString *unpaddedUnitsString; // @synthesize unpaddedUnitsString=_unpaddedUnitsString;
@property(retain, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property(readonly, nonatomic) double unitsWidth; // @synthesize unitsWidth=_unitsWidth;
- (id)_legendStringForDistanceString:(id)arg1 appendUnits:(_Bool)arg2 index:(int)arg3;	// IMP=0x0000000000174147
@property(readonly, nonatomic) NSString *zeroUnitsString; // @synthesize zeroUnitsString=_zeroUnitsString;
- (id)_uncachedLegendStringsForDistanceString:(id)arg1;	// IMP=0x0000000000173e6b
@property(nonatomic) _Bool useLightText; // @dynamic useLightText;
@property(nonatomic) double segmentLengthInPixels; // @dynamic segmentLengthInPixels;
- (_Bool)canDisplaySegment:(unsigned long long)arg1;	// IMP=0x00000000001738af
- (void)_calculateLegend:(_Bool)arg1;	// IMP=0x0000000000173149
- (void)setUnits:(id)arg1;	// IMP=0x0000000000172ef3
- (double)_widthForString:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000172dea
- (void)clearCaches:(id)arg1;	// IMP=0x0000000000172dcd
- (id)init;	// IMP=0x0000000000172bc7

@end

