
void pulse()
{
  int start_index = 100;
  // start_index = -1 * millis() / 50;
  start_index = -10 + -1 * millis() / 175;
  // fill_solid(leds, NUM_LEDS, CHSV(start_index, SATURATION, beatsin16(30, 50, 255))); // Set all to Off.
  fill_solid(leds, NUM_LEDS, CHSV(start_index, SATURATION, beatsin16(20, 50, 255))); // Set all to Off.
  // CRGB color = ColorFromPalette(currentPalette, start_index, beatsin16(20, 50, 255), LINEARBLEND);
  // fill_solid(leds, NUM_LEDS, color);
  start_index += 1;
}