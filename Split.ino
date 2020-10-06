void split()
{
  int rate = 10;
  int split_value = 2;
  int row = NUM_LEDS / split_value;
  int start_hue;
  int delta_hue = 5;

  start_hue = -1 * millis() / rate;
  for (int i = 0; i < row; i++)
  {
    leds[i] = CHSV(start_hue, SATURATION, 255);
    // leds[i] = ColorFromPalette(currentPalette, start_hue, 255, LINEARBLEND);
    // leds[NUM_LEDS - 1 - i] = ColorFromPalette(currentPalette, start_hue, 255, LINEARBLEND);
    leds[NUM_LEDS - 1 - i] = CHSV(start_hue, SATURATION, 255);
    start_hue += delta_hue;
  };
}
