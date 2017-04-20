/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _AdjustableLabel : UILabel {
    struct CGVector { 
        float dx; 
        float dy; 
    }  _offset;
}

@property (nonatomic) struct CGVector { float x1; float x2; } offset;

- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 baselineCalculationOnly:(BOOL)arg2;
- (struct CGVector { float x1; float x2; })offset;
- (void)setOffset:(struct CGVector { float x1; float x2; })arg1;

@end